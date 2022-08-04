#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

int controller_loadFromText(char* path , LinkedList* pArrayListMovie);
int controller_ListPost(LinkedList* pArrayListPost);
int controller_map(LinkedList* pArrayListPost);
int controller_filterLikes(LinkedList* pArrayListPost);
int controller_filterhate(LinkedList* pArrayListPost);
int controller_ordenarPost(LinkedList* pArrayListPost);
int controller_postMasLikeado(LinkedList* pArrayListPost);
int controller_saveAsText(char* path , LinkedList* pArrayListMovie);
int controller_clearList(LinkedList* pArrayListMovie);
int compFollowersPost(void* postA, void* postB);


#endif // CONTROLLER_H_INCLUDED
