read -p 'Should I make every branches updated with main?: [y/n]' mer
read -p 'Should I delete every local branches(except main) after push?: [y/n]' pu

read -p "This script does 'git pull --all', make sure you commited and pushed your work and hit enter."

git pull --all


git checkout --track main
git checkout main

#for local in `git branch | cut -c 3- | grep -v /HEAD | grep -v main`;
#do
#   git merge $local
#done


for remote in `git branch -r | grep -v /HEAD | grep -v main`;
do

   git checkout --track $remote
   git checkout main
   bra=$(echo $remote | cut -c 8-)

   if ! git merge $bra -m "Merge branch '$bra' into main"; then
      echo "merge conflict in branch $bra !"
      break
   elif [ "$mer" == "y" ]; then
      git checkout $bra
      git merge main
   fi

   printf "\n"
   git checkout main

done

git push --all

if [ "pu" == "y" ]
   for local in `git branch | grep -v /HEAD | grep -v main`;
   do
      git branch -d $local
   done
fi


read -p "Press enter to continue"