# Code Lyoko decompilation (USA)

> **This game moved to [liolu/All-nds-decomp-games](https://github.com/liolu/All-nds-decomp-games/tree/main/games/C/code-lyoko)** (`games/C/code-lyoko`), with its whole history: every Nintendo DS decompilation in one repository, one game downloadable on its own (`python nds.py get code-lyoko`). This repository is archived; issues and pull requests go there.

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/code-lyoko-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/code-lyoko-decomp) [![Data](https://bytematch.dev/liolu/code-lyoko-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/code-lyoko-decomp) [![Functions](https://bytematch.dev/liolu/code-lyoko-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/code-lyoko-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `AL5E`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`██░░░░░░░░░░░░░░░░░░` **11.09%** of the code matched · data 0.00% · 2129/7475 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 1803 | 1803/1803 | 6.77% |
| Reused from other decompilations, not merged into files yet | 326 | 326/326 | 4.32% |

*Updated 2026-11-17 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py usa
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
