@echo on


pushd %~dp0
for /d %%D in (*) do (
  pushd "%%D"
  for /r %%F in (*) do (
    for %%P in ("%%F\..") do (
      ren "%%F" "%%~nF.cpp"
    )
  )
  popd
)
popd

@echo off
echo.
echo Ȯ���� ���� �Ϸ�!
pause