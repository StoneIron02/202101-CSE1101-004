read -p 'Should I make every branches updated with main?: [y/n]' mer
read -p 'Should I delete every local branches(except main) after push?: [y/n]' pu

read -p "This script does 'git pull --all', make sure you commited and pushed your work and hit enter."


#$debug = T
debug="F"

git pull --all


git checkout --track origin/main

#for local in `git branch | cut -c 3- | grep -v /HEAD | grep -v main`;
#do
#   git merge $local
#done

err="no"

for remote in `git branch -r | grep -v /HEAD | grep -v main`;
do
   echo "remote : $remote"
   git checkout --track $remote
   git checkout main
   bra=$(echo $remote | cut -c 8-)
   echo "bra : $bra"

   if ! git merge $bra -m "Merge branch '$bra' into main"; then
      printf "\nbranch '$bra'\n"
      printf "\tmerge conflict in branch $bra !"
      err="yes"
      break
   fi
   printf "\n"
done

printf "\n\n37 line, err = $err \n\n"

if [ "$err" == "no" ]; then

   if [ "$mer" == "y" ]; then
      for loc in `git branch | grep -v /HEAD | grep -v main`;
      do
         git checkout $loc
         #Should be fast-forward
         git merge main
      done
   fi

   if [ "$debug" == "F" ]; then
      git push --all
   fi

   if [ "$pu" == "y" ]; then
      for local in `git branch | grep -v /HEAD | grep -v main`;
      do
         git branch -d $local
      done
   fi

fi

read -p "Press enter to continue"