241458@Deca5 MINGW64 ~
$ git config --global user.email "imanfatimeh1@gmail.com"

241458@Deca5 MINGW64 ~
$ git config --global user.name "goggins23 "

echo "# iman" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/goggins23/iman.git
git push -u origin main