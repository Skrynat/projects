# Git Basics Cheat Sheet

## Mental Model
- **Working directory**: your files right now.
- **Staging area (index)**: the “basket” of changes you plan to commit.
- **Local repo**: your history on your machine (`.git/`).
- **Remote**: copy hosted elsewhere (e.g., GitHub).

Flow:  
edit → `add` (stage) → `commit` (save locally) → `push` (send to remote).  
To get others’ changes: `fetch` (download) → `merge`/`rebase` (integrate) → now you’re up to date.

---

## Core Commands

### Status & History
```
git status
git log --oneline --graph --decorate --all
git diff
git diff --staged
```

### Starting a Repo
- Clone: `git clone git@github.com:user/repo.git`
- New: `git init`

### Stage & Commit
```
git add <file>
git add .
git commit -m "message"
```

### Remotes
```
git remote -v
git remote add origin git@github.com:user/repo.git
git push -u origin main
```

### Push / Pull / Fetch
```
git push             # send commits to remote
git pull             # fetch + merge (or rebase)
git fetch            # download only
git merge origin/main
git rebase origin/main
```

### Branching
```
git branch
git switch -c feature/login
git switch main
git merge feature/login
git branch -d feature/login
```

### Undo / Fix Ups
```
git restore <file>
git restore --staged <file>
git commit --amend
git reset --soft HEAD^
git reset --hard HEAD^   # dangerous
git revert <commit>
```

### Stash
```
git stash push -m "wip"
git stash list
git stash pop
```

---

## .gitignore
Example (C++):
```
build/
*.o
*.out
.vscode/
```

---

## Typical Solo Workflow
```
git pull --rebase
git add -p
git commit -m "feat: add X"
git push
```

## Typical Feature Workflow
```
git switch -c feature/cool-thing
# work...
git push -u origin feature/cool-thing
```

---

## Merge Conflicts
1. `git pull` or `git merge`
2. Edit conflict markers
3. `git add <files>`
4. `git commit` or `git rebase --continue`

---

## SSH Keys
- Create: `ssh-keygen -t ed25519 -C "you@example.com"`
- Add to GitHub: Settings → SSH and GPG keys
- Test: `ssh -T git@github.com`

---

## Good Habits
- One logical change per commit.
- Descriptive commit messages.
- Use branches for non-trivial work.
- Keep `main` always releasable.
- Don’t commit secrets or large binaries.

---

## Mini Cheat Sheet
```
git status
git log --oneline --graph --decorate --all
git add -p
git commit -m "message"
git pull --rebase
git push
git switch -c feature/name
git switch main
git merge feature/name
git branch -d feature/name
git restore <file>
git restore --staged <file>
git commit --amend
git reset --soft HEAD^
git revert <commit>
git stash push -m "wip"
git stash pop
```
