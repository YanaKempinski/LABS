#include <stdio.h>

  typedef struct _Book{
    char* autor;
    char* title; 
    int publication;
    
    
  }Book;
  
  void print(Book p){
    printf("%s-%s(%d)\n", p.autor, p.title, p.publication);
  }
  
  int main(){
    int w;
    Book books[3];
    
     books[0].autor="George Orwell";
     books[0].title="1984";
     books[0].publication=1948;
     
     books[1].autor="Franz Kafka";
     books[1].title="The Metamorphosis";
     books[1].publication=1915;
    
     books[2].autor="Taras Shevchenko";
     books[2].title="Testament";
     books[2].publication=1845;
    
    Book oldest=books[0];
    for(int i=0;i<3;i++){
      if(books[i].publication<oldest.publication){
        oldest=books[i];
      }
    }
    Book youngest=books[0];
    for(int i=0;i<3;i++){
      if(books[i].publication>youngest.publication){
        youngest=books[i];
      }
    }
    
    printf("enter:\n '1' if you want to see the youngest book \n '2' if you want to see the oldest book\n '3' if you want to see all books\n");
   
   scanf("%d",&w);
   
   for(int i=0;i<3;i++){
      if(w==2){
        if(books[i].publication==oldest.publication){
        print (books[i]);
        }
      }
   
      if(w==1){
        if(books[i].publication==youngest.publication){
        print (books[i]);
        }
      }
      
      if(w==3){
      print (books[i]);
      }
   }

    
    return 0;
    
  }
   
    
    