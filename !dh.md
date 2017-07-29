
## !dh
The !dh extension displays the headers for the specified image. 

```
!dh [Options] Address 
!dh -h
```

```
0:000> !dh -h
Usage: dh [options] address

Dumps headers from an image based at address

Options:

   -a      Dump everything
   -f      Dump file headers
   -s      Dump section headers
   -e      Dump exports
   -i      Dump imports
```

----

```
0:000> !dh -a ntdll
0:000> !dh -f ntdll
0:000> !dh -s ntdll
0:000> !dh -e ntdll
0:000> !dh -i cmd
```

----

```
0:000> !dh -s ntdll

SECTION HEADER #1
   .text name
  10027A virtual size
    1000 virtual address
  100400 size of raw data
     400 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
60000020 flags
         Code
         (no align specified)
         Execute Read


Debug Directories(2)
    Type       Size     Address  Pointer
    cv           22      101258   100658    Format: RSDS, guid, 2, ntdll.pdb
    (    10)       4      101254   100654

SECTION HEADER #2
      RT name
     1DA virtual size
  102000 virtual address
     200 size of raw data
  100800 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
60000020 flags
         Code
         (no align specified)
         Execute Read

SECTION HEADER #3
  .rdata name
   2EF74 virtual size
  103000 virtual address
   2F000 size of raw data
  100A00 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
40000040 flags
         Initialized Data
         (no align specified)
         Read Only

SECTION HEADER #4
   .data name
    BA60 virtual size
  132000 virtual address
    9800 size of raw data
  12FA00 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
C0000040 flags
         Initialized Data
         (no align specified)
         Read Write

SECTION HEADER #5
  .pdata name
   12F24 virtual size
  13E000 virtual address
   13000 size of raw data
  139200 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
40000040 flags
         Initialized Data
         (no align specified)
         Read Only

SECTION HEADER #6
   .rsrc name
   560D8 virtual size
  151000 virtual address
   56200 size of raw data
  14C200 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
40000040 flags
         Initialized Data
         (no align specified)
         Read Only

SECTION HEADER #7
  .reloc name
     4E0 virtual size
  1A8000 virtual address
     600 size of raw data
  1A2400 file pointer to raw data
       0 file pointer to relocation table
       0 file pointer to line numbers
       0 number of relocations
       0 number of line numbers
42000040 flags
         Initialized Data
         Discardable
         (no align specified)
         Read Only
```