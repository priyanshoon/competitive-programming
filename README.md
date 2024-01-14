# Code Template

```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main (int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code
}
```

## Nvim Remap

```lua
vim.keymap.set("n", "<leader>r", "<cmd>:term printf 'priyanshoon your output is \\n****************************************************************************************************************************************\\n' && g++ -std=c++1z -o test %:r.cpp && ./test && printf '**********************************************************************************************************************************\\n' <CR>", {silent = true, noremap = true});
vim.keymap.set("n", "<leader>f", "<cmd>:term printf 'priyanshoon your output is \\n****************************************************************************************************************************************\\n' && g++ -std=c++1z -o test %:r.cpp && ./test < input.txt && printf '****************************************************************************************************************************************\\n' <CR>", {silent = true});
```
