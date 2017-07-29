
## e, ea, eb, ed, eD, ef, ep, eq, eu, ew, eza (Enter Values)

The e* commands enter into memory the values that you specify.


This command should not be confused with the ~E (Thread-Specific Command) qualifier.

```
e{b|d|D|f|p|q|w} Address [Values] 
e{a|u|za|zu} Address "String" 
e Address [Values]
```

```
Parameters
Syntax eD ef 

Address 
  Specifies the starting address where to enter values. The debugger replaces the value at Address and each subsequent memory location until all Values have been used.

Values 
  Specifies one or more values to enter into memory. Multiple numeric values should be separated with spaces. If you do not specify any values, the current address and the value at that address will be displayed, and you will be prompted for input.

String 
  Specifies a string to be entered into memory. The ea and eza commands will write this to memory as an ASCII string; the eu and ezu commands will write this to memory as a Unicode string. The eza and ezu commands write a terminal NULL; the ea and eu commands do not. String must be enclosed in quotation marks.
```

----

## examples

```
0:000> db rip
00000000`7777cb60  cc eb 00 48 83 c4 38 c3-90 90 90 90 90 90 90 90  ...H..8.........
00000000`7777cb70  48 8d 05 29 5b 08 00 c3-90 90 90 90 90 90 90 90  H..)[...........
00000000`7777cb80  4c 8b dc 45 89 4b 20 49-89 53 10 49 89 4b 08 53  L..E.K I.S.I.K.S
00000000`7777cb90  56 57 41 54 41 55 41 56-41 57 48 83 ec 70 41 8b  VWATAUAVAWH..pA.
00000000`7777cba0  c1 4d 8b f0 4c 8b ca 4c-8b c1 33 d2 49 89 53 90  .M..L..L..3.I.S.
00000000`7777cbb0  8d 72 08 89 74 24 34 3b-c6 73 0a bb 04 00 00 c0  .r..t$4;.s......
00000000`7777cbc0  45 33 ff eb 09 41 21 16-4d 8d 7e 08 33 db 33 ff  E3...A!.M.~.3.3.
00000000`7777cbd0  48 89 7c 24 58 4c 8d 25-e4 88 05 00 49 8b c1 48  H.|$XL.%....I..H
0:000> ea eip helloworld
             ^ Quotes required in 'ea eip helloworld'
0:000> ea eip "helloworld"
0:000> db rip
00000000`7777cb60  68 65 6c 6c 6f 77 6f 72-6c 64 90 90 90 90 90 90  helloworld......
00000000`7777cb70  48 8d 05 29 5b 08 00 c3-90 90 90 90 90 90 90 90  H..)[...........
00000000`7777cb80  4c 8b dc 45 89 4b 20 49-89 53 10 49 89 4b 08 53  L..E.K I.S.I.K.S
00000000`7777cb90  56 57 41 54 41 55 41 56-41 57 48 83 ec 70 41 8b  VWATAUAVAWH..pA.
00000000`7777cba0  c1 4d 8b f0 4c 8b ca 4c-8b c1 33 d2 49 89 53 90  .M..L..L..3.I.S.
00000000`7777cbb0  8d 72 08 89 74 24 34 3b-c6 73 0a bb 04 00 00 c0  .r..t$4;.s......
00000000`7777cbc0  45 33 ff eb 09 41 21 16-4d 8d 7e 08 33 db 33 ff  E3...A!.M.~.3.3.
00000000`7777cbd0  48 89 7c 24 58 4c 8d 25-e4 88 05 00 49 8b c1 48  H.|$XL.%....I..H

```

```
0:000> eu eip "helloworld"
0:000> db rip
00000000`7777cb60  68 00 65 00 6c 00 6c 00-6f 00 77 00 6f 00 72 00  h.e.l.l.o.w.o.r.
00000000`7777cb70  6c 00 64 00 5b 08 00 c3-90 90 90 90 90 90 90 90  l.d.[...........
00000000`7777cb80  4c 8b dc 45 89 4b 20 49-89 53 10 49 89 4b 08 53  L..E.K I.S.I.K.S
00000000`7777cb90  56 57 41 54 41 55 41 56-41 57 48 83 ec 70 41 8b  VWATAUAVAWH..pA.
00000000`7777cba0  c1 4d 8b f0 4c 8b ca 4c-8b c1 33 d2 49 89 53 90  .M..L..L..3.I.S.
00000000`7777cbb0  8d 72 08 89 74 24 34 3b-c6 73 0a bb 04 00 00 c0  .r..t$4;.s......
00000000`7777cbc0  45 33 ff eb 09 41 21 16-4d 8d 7e 08 33 db 33 ff  E3...A!.M.~.3.3.
00000000`7777cbd0  48 89 7c 24 58 4c 8d 25-e4 88 05 00 49 8b c1 48  H.|$XL.%....I..H
```