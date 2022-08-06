## C Data - Test1

![picture 1](../images/52516d3a24fbe542a1a806102c5734d0e029e6d7bf5a12860b4b1aa2e8112f18.png)

## C Data - Test2

![picture 2](../images/b8299f0665357ad8ef26953f40204c9d22ec8886840be92a842c56e7297dfad7.png)  

## C Data - Test3

![picture 3](../images/cd912d8b9190077c662b54435155f5af845881d6a369d5615dc5706d54d7f8d8.png)  

## C Data Types

![picture 4](../images/bd9a9d0d731a2a427ce9569143e5ebcda311283e38cb64ddf4f43bffa4f6a74f.png)  


## C Data - Primitive Types

![picture 6](../images/2cbd00c639081b79c827dd85e9a8db6a4b9cf5118ef0292e8b98511c97ba887a.png)  

- `char` A represents 65 in ascii and 0100 0001 means 65 in bites
- `short`, `int`, `long` basically represents what is the range of value that you can store for each one of them in your programming environment
- `double` is a special situation in the earlier days because you wanted to store much more higher precision than float ex) 1.123456789
- `malloc` returns pointer and not particular data type value
  - ```zsh
    $ man malloc
    void *malloc(size_t size);
    ```
  - type cast ex) `char *p = (char *)malloc(50);`

## C Data - Test1 - Explanation

![picture 7](../images/d69d5566141b903552705cf865471005fda49bfff9ecdeda74dd12654bff722b.png)  

## C Data - Test2 - Explanation

![picture 8](../images/f51f89faa44996ec0fcd00f245e7efce7e0d5ba7cb8caff9d95c28f3de8848b7.png)  

- `int` is >=2 bytes
- controllers, processor, they don't understand negative number for their input functions

## C Data - Test3 - Explanation

![picture 1](../images/046fa5dc96826359a6acb6ee02fbeff0fa615ff266378c8b96cbe4c7fb5698c9.png)  

- ```zsh
   $ man strlen
   size_t strlen(const char *s);
   ```

## C Data - User Defined Types

![picture 2](../images/ca23bdf987f68f972a1d52e7460f83805ebc83e63ad1bb9c592e1f41a020f1f7.png)  

![picture 3](../images/9874281374c6dc513d081ec906d8de9c62a1835041ff0462e99f4fb4e2aa3851.png)  

- `Union`, the total memory allocated for particular Union will be the memory required for the biggest member or biggest field of particular Union

## Long vs Long Long Data type in 32-bit system

![picture 5](../images/2a108cac31640922c379595f0438a396a8bdca1a5d6cd0d5782685781c6de064.png)  

![picture 4](../images/9a22020d11ed78096d3b68679ba92051463bd3ba9fa73009fcd6895a255f7d79.png)  

## C Data - Derived or Dependent Types

![picture 6](../images/051addcf6db142fadb476a0eeb7da357ca6e9268a8ab555c6766cd96d8ddc0c5.png)  
