# cartesian-stock-demo
# 🌳 Cartesian Tree for Stock Crash Detection

A C++ implementation of a **Min Cartesian Tree** demonstrating efficient construction using a stack-based algorithm and its application in **stock market time-series analysis** for fast minimum value queries.

---

## 📖 Overview

A **Cartesian Tree** is a binary tree built from an array that satisfies two important properties:

- **Heap Property**
  - In a Min Cartesian Tree, every parent node is less than or equal to its children.

- **In-Order Traversal Property**
  - The in-order traversal of the tree produces the original array.

These unique properties make Cartesian Trees useful in several domains including **Range Minimum Query (RMQ)**, **time-series analysis**, **compiler design**, and **text indexing**. 

---

# ✨ Features

- 🌳 Min Cartesian Tree construction
- ⚡ Linear-time stack-based algorithm
- 📈 In-order traversal verification
- 💻 Simple C++ implementation
- 📊 Real-world stock market application
- 📚 Educational demonstration of Cartesian Trees

---

# 🛠️ Technologies Used

- C++
- Stack Data Structure
- Binary Trees
- Algorithms

---

# 📂 Repository Structure

```text
cartesian-stock-demo/
│
├── cpp/
│   └── cartesiantree.cpp
│
├── docs/
│   └── cartesion_tree.pptx
│
├── images/
│   ├── architecture.png
│   ├── workflow.png
│   └── stock-application.png
│
├── screenshots/
│   ├── code.png
│   └── output.png
│
├── archive/
│
├── LICENSE
├── .gitignore
└── README.md
```

---

# 🧠 Algorithm

The algorithm constructs a Min Cartesian Tree using a stack.

### Steps

1. Create an empty stack.
2. Traverse the array from left to right.
3. Create a node for each element.
4. Remove larger elements from the stack.
5. Attach the removed node as the left child.
6. Attach the current node as the right child of the remaining stack top.
7. Push the current node onto the stack.
8. Repeat until all elements are processed.

This stack-based approach constructs the tree in **O(n)** time.
---

# 📊 Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Tree Construction | O(n) |
| In-order Traversal | O(n) |
| Auxiliary Stack | O(n) |

The presentation also contrasts this with a naive O(n²) construction method. :contentReference[oaicite:2]{index=2}

---

# 📈 Real-World Application

## Stock Crash Detection & Time-Series Analysis

Financial markets continuously generate stock price data.

Using a Min Cartesian Tree:

- Identify the minimum stock price efficiently.
- Support fast Range Minimum Queries (RMQ).
- Analyze historical price trends.
- Detect market crash intervals in static datasets.

This demonstrates how a data structure can support financial analytics. 

---

# ▶️ How to Run

Compile the program:

```bash
g++ cartesiantree.cpp -o cartesian
```

Run:

```bash
./cartesian



# 🖼️ Architecture & Workflow

The `images/` folder contains:

- Architecture Diagram
- Workflow Diagram
- Stock Market Application Diagram

---

# 📚 Applications

- Range Minimum Query (RMQ)
- Time-Series Analysis
- Stock Market Analysis
- Compiler Design
- Expression Parsing
- Text Indexing
- Suffix Arrays



---

# 🚀 Future Improvements

- Interactive visualization of the tree
- GUI-based implementation
- Dynamic update support
- Integration with real stock market datasets
- Performance benchmarking



# 📄 License

This project is licensed under the **MIT License**.
