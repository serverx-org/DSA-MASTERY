# Contributing Guidelines

Thank you for your interest in contributing to **DSA Mastery**! This repository is organized to help developers practice Data Structures and Algorithms (DSA) across multiple programming languages, difficulty levels, and popular DSA sheets. It also powers a gamified web application interface to make learning more engaging.

---

## 📌 Ways to Contribute

### 1. 📘 Improve Documentation

* Fix grammar, formatting, or structural issues in `README.md` or problem descriptions.
* Enhance `docs/` content, especially architecture or contribution guides.
* Translate content structure across supported languages (e.g., Python ↔ C++).

### 2. 🔗 Add Learning Resources

* Suggest quality tutorials, articles, or YouTube links related to unsolved problems or topics.
* Update `docs/resources.md` or relevant problem `README.md` with curated references.

### 3. 🧠 Contribute DSA Code

* Add or improve algorithm implementations in **C++, Python, Java, Go, etc.**
* Follow language-specific templates and directory conventions.
* Keep solutions concise and correct, and name files clearly.

### 4. 🧩 Enhance the Gamified Web App

* Improve UI/UX in the `/webapp` (Next.js) folder.
* Contribute to features like streaks, XP tracking, leaderboard, or code editor integration.

---

## 🗂️ Folder Structure Overview

```plaintext
problems/
  ├── easy/
  │   └── two-sum/
  │       ├── README.md
  │       ├── cpp/solution.cpp
  │       ├── python/solution.py
  │       ├── java/Solution.java
  │       └── go/solution.go
  ├── medium/
  └── hard/

dsa-sheets/
  ├── striver/
  ├── love-babbar/
  └── custom/

langs/
  ├── cpp/templates/
  ├── python/
  └── java/
```

---

## 🧪 Branching Strategy

All contributions should be made through feature branches targeting the `dev` branch.

### 🔧 Language-Based Branches

```plaintext
lang/python/your-feature
lang/cpp/add-binary-tree
```

### 📚 Sheet-Specific Contributions

```plaintext
sheet/striver/add-linkedlist-problems
sheet/love-babbar/sorting-section
```

### 🖥️ Web App Enhancements

```plaintext
ui/editor
ui/gamification
```

### 🧬 Workflow

1. Fork the repo or create a branch off `dev`.
2. Make changes respecting the structure.
3. Push your branch and create a PR to `dev`.
4. Add a clear PR title and description.

---

## ✅ Code Style & Practices

* Keep your solution self-contained within the problem's directory.
* Always include a problem `README.md` if adding a new one.
* For Python, follow `black` formatting. For C++, use `clang-format`.
* Avoid redundant files or unnecessary boilerplate.

---

## 💡 Examples

### Add a New Problem in Java (Easy Level)

```plaintext
problems/easy/fibonacci/
  ├── README.md
  └── java/Solution.java
```

### Add a Problem to Striver Sheet in C++

```plaintext
dsa-sheets/striver/arrays/
  └── kadanes-algorithm/
      ├── README.md
      └── cpp/solution.cpp
```

---

## 🙌 Final Notes

* Stick to the format and structure for consistency.
* All PRs undergo validation via GitHub Actions.
* Please ensure you do not break the folder hierarchy.

Thanks again for contributing!

**— DSAMastery Team**
