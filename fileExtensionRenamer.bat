@echo on


pushd %~dp0
for /d %%D in (*) do (
  pushd "%%D"
  for /r %%F in (*) do (
    for %%P in ("%%F\..") do (
      ren "%%F" "%%~nxP_%%~nF.cpp"
    )
  )
  popd
)
popd

@echo off
echo.
echo 확장자 변경 완료!
pause