# Writing a C++ linear algebra library from scratch
[Link](https://sowb.github.io/2021/09/15/writing-a-c-linear-algebra-library-from-scratch./)

- Implements basic linear algebra library
- Numerically computes PCA (Principal Component Analysis)
	- Using SVD (Singular Value Decomposition)
- All dev from scratch
It follows that the SVD algorithm is
$$
\begin{equation}
	X = U \Sigma V^T
\end{equation}
$$
Where
$$
\begin{equation}
	V = X^TX, U = XX^T, \Sigma = \sqrt{eigenvalues(X^TX)}
\end{equation}
$$

Uses the [[QR algorithm]] to numberically compute eigenvectors and eigenvalues.
