namespace calc{
    
    int sum(auto a, auto b)
    {
        return a + b;
    }

    int sub(auto a, auto b)
    {
        return a - b;
    }
    int div(auto a, auto b)
    {
        if(b>0)
            {return a/b;}
        else
            std::cout<<"Zero division error";
    }
}
int mul(auto a, auto b)
    {
        return a * b;
    }
/*
namespace msum{
    int sum(auto a, auto b){
        return a + b;
    }
}
namespace msub{
    int sub(auto a, auto b){
        return a - b;
    }
}
namespace mmul{
    int mul(auto a, auto b){
        return a * b;
    }
}
namespace mdiv{
    int div(auto a, auto b){
        if(b>0)
        {return a/b;}
        else
        std::cout<<"Zero division error";
    }
}
*/