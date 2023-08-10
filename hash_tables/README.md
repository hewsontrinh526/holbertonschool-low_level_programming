<h1>C - Hash Tables</h1>

### Hash tables are a data structure that implements an array; it is an abstract data type that maps keys to value. To map the keys to the value, a hash function is used to map data of arbitrary size to a fixed-size values.

### The following code block is a given data structure for this project.

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	 char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

### The following projects demonstrates the implementation of a hash table in C.
## 0. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/0-hash_table_create.c">>>> ht = {}</a>

A function that creates a hash table. The prototype of this function was `hash_table_t *hash_table_create(unsigned long int size);` where `size` is the size of the array. The function should return a pointer to the newly created hash table. If something goes wrong, then the function should return `NULL`.

## 1. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/1-djb2.c">djb2</a>

A function that implements the djb2 hashing algorithm. The prototype of this function was `unsigned long int hash_djb2(const unsigned char *str);` where `str` is the string that needs to be run in the hashing function. The function should return an unsigned long integer where this represents the hashed value.

## 2. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/2-key_index.c">key -> index</a>

A function that gives you the index of a key. The prototype of this function was `unsigned long int key_index(const unsigned char *key, unsigned long int size);` where `key` is the key and `size` is the size of the array of the hash table. The function should uses the `hash_djb2`

## 3. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/3-hash_table_set.c">>>> ht['betty'] = 'cool'</a>

A function that adds an element to the hash table. The prototype of this function was `int hash_table_set(hash_table_t *ht, const char *key, const char *value);
` where `ht` is the hash table you want to add or update the key/value to, `key` is the key and `value` is the vlaue associated with the key. The `key` cannot be an empty string whilst the `value` can be an empty string but also must be duplicated in the implementation. The function should return 1 if successful, else 0. In cases of collisions, the new node will be added at the beginning of the list.

## 4. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/4-hash_table_get.c">>>> ht['betty']</a>

A function that retrieves a value associated with a key. The prototype of this function was `char *hash_table_get(const hash_table_t *ht, const char *key);` where `ht` is the hash table you want to look into and `key` is the key you're looking for. The function should return the value associated with the element, or `NULL` if the `key` couldn't be found.

## 5. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/5-hash_table_print.c">>>> print(ht)</a>

A function that prints a hash table. The prototype of this function is `void hash_table_print(const hash_table_t *ht);` where `ht` is the hash table. The function should print the key/value in the order that they appear in the array of the hash table, i.e. `Order: array, list`. If `ht` is `NULL`, then don't print anything.

## 6. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/hash_tables/6-hash_table_delete.c">>>> del ht</a>

A function that deletes a hash table. The prototype of this function is `void hash_table_delete(hash_table_t *ht);` where `ht` is the hash table. The function should run without any memory leaks and as all allocated bits must be freed. 


