    #include <stdio.h>  
    #include <stdlib.h>  
    #include <malloc.h>  
    struct node  
    {  
        struct node *left;  
        int info;  
        struct node *right;  
    };  
        void insert(struct node **,int);  
        void inorder(struct node *);  
        void postorder(struct node *);  
        void preorder(struct node *);  
       

       void main () 
       {
        struct node *ptr;  
        int n,i,item,ch;  
        ptr=NULL;

        while(1)    
            {  
                printf("\nBINARY SEARCH TREE");  
                printf("\n1. Creation of BST");  
                printf("\n2. Preorder Traversal");  
                printf("\n3. Inorder Traversal");  
                printf("\n4. Postorder Traversal");
                printf("\n5. Exit\n");
                printf("\nEnter the choice:");
                scanf("%d",&ch);              
                switch (ch)  
                {  
                case 1 :   
                    printf("Enter number of terms to add to tree: \n");
                    scanf("%d",&n);
                    for(i=0;i>n;i++)
                    printf("\nEnter the elements\n");  
                    scanf("%d",&item);  
                    insert(&ptr,item);
             
                    break;                            
                case 2 :   
                    printf("\nPreorder Traversal of the Binary Tree::\n");  
                    preorder(ptr);  
                    break;  
                case 3 :   
                    printf("\nInorder Traversal of the Binary Tree::\n");  
                    inorder(ptr);  
                    break;  
                case 4 :   
                    printf("\nPostorder Traversal of the Binary Tree::\n");  
                    postorder(ptr);  
                    break;   
                case 5 :  
                    exit(0);     
                }  
        }
       
    }  
       
    void insert(struct node **p,int item)  
    {  
        if((*p)==NULL)  
        {  
            printf("Leaf node created.");  
            (*p)=malloc(sizeof(struct node));  
            (*p)->left = NULL;  
            (*p)->right = NULL;  
            (*p)->info = item;  
            return;  
        }  
        else  
            if(item<(*p)->info)  
            {  
                printf("\nDirected to left link.\n");  
                insert(&((*p)->left),item);  
            }  
            else 
            if(item==(*p)->info)  
            {  
                printf("\nKEY NOT FOUND\n");  
                return;  
            }   
            else
            {  
                printf("Directed to right link.\n");  
                insert(&((*p)->right),item);  
            }   
        return;  
    }  
       
    void inorder(struct node *p)  
    {  
        if(p!=NULL)  
        {  
            inorder(p->left);  
            printf("%d ",p->info);  
            inorder(p->right);  
        }  
        else  
        return;  
    }  
       
    void preorder(struct node *p)  
    {  
        if(p!=NULL)  
        {  
            printf("%d ",p->info);  
            preorder(p->left);  
            preorder(p->right);  
        }  
        else  
        return;  
    }  
       
    void postorder(struct node *p)  
    {  
        if(p!=NULL)  
        {  
            postorder(p->left);  
            postorder(p->right);  
            printf("%d ",p->info);  
        }  
        else  
        return;  
    }  