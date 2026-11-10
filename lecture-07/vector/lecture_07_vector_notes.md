# Vector

Vector is dynamic version of array.

## Syntax

**vector datatype name_of_the_vector = {elements,elements};**

### 1.Empty Vector

```cpp
vector <datatype> name_of_the_vector;
```

#### 2.Initializing With Elements

```cpp
vector <int> marks = {74,7,47,27,28};
```

#### 3.Initializing with size and default value

```cpp
vector <datatype> (number_of_element,element);
vector <int> numbers(5,7);
```

### Vector Functions

#### 1. size

Syntax - vector name.size()  
Use - It is returns size of vector.  

##### 2.push_back

Syntax - vector name.push_back(element);  
Use - Insert a element after the last index of vector.  

##### 3.pop_back

Syntax - vector name.pop_back();  
Use - Remove the element that present at last index of vector.  

##### 4.front

Syntax - vector name.front();  
Use - Display the element that stored at first index of vector.  

##### 5.back

Syntax - vector name.back();  
Use - Display the element of last index.  

##### 6.at

Syntax - vector name.at(index);  
Use - Display the element of particular index.  
