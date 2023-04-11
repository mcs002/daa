``` mermaid
    flowchart TD;
    A(START) --> m[/masukkan nilai m: /]
    m --> cm[cm = m * 100];
    cm --> inci[inci = m * 100 / 1.54];
    inci --> cout_cm[/tampilkan cm/];
    cout_cm --> cout_inci[/tampilkan inci/]
    cout_inci --> E
```