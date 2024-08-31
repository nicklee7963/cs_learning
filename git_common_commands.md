git init : initialize the repo create a local repo
git add . : adding new files to git repo
git commit -m "message" : commit all the work items
git status : check your repo status 
git log : show you all the history
git remote add origin Server_repo_url : link local repo to Server
git push -u origin master : push contents from local repo to Server
git clone Server_repo_url : make a clone of a server to your local repo
git branch New_branch : create new branch
git checkout New_branch : switch to another branch
git push -u origin New_branch : push specific branch to server
git branch -av : list out all existing branch
git merge New_branch : merge with specific branch
git branch -D New_branch : delete branch
git push origin -delete New_branch : tell server that the branch is deleted