#include <iostream>
#include "Header.h"
using namespace std;




int main()
{
    
    AnimalWorld t;
    cout << "Client made all herbivores eat! " << endl;
    cout << "================================" << endl;

    t.MealsHerbivores();


    cout << "\n\nThe client made all predators hunt on his continent! " << endl;
    cout << "=====================================================" << endl;


    t.NutritionCarnivores();
   
     
}









Wildebeest::Wildebeest() :Weight{ 50 }
{
    cout << "Create wildebeest ->  Weight = " << Weight << " kg" << endl;
}
void Wildebeest::IEatGrass()
{
    Weight += 10;
    cout << "wildebeest ate. Her weight is " << Weight << " kg" << endl;
}
void Wildebeest::ILife()
{
    cout << "live wildebeest" << endl;

}
int Wildebeest::GetWeight()
{
    return Weight;
}

Bison::Bison() : Weight{ 100 }
{
    cout << "Create bison ->  Weight = " << Weight << " kg" << endl;
}
void Bison::IEatGrass()
{
    Weight += 10;
    cout << "Bison ate. His weight is " << Weight << " kg" << endl;
};
void Bison::ILife()
{
    cout << "live bison" << endl;

}
int Bison::GetWeight()
{
    return Weight;
}


Elk::Elk() :Weight{ 70 }
{
    cout << "Create  elk ->  Weight = " << Weight << " kg" << endl;
}
void Elk::IEatGrass()
{
    Weight += 10;
    cout << " Elk ate. Her weight is " << Weight << " kg" << endl;
};
void Elk::ILife()
{
    cout << "live  Elk" << endl;

}
int Elk::GetWeight()
{
    return Weight;
}

Lion::Lion() : Power{ 130 }
{
    cout << "Create  Lion ->  Power = " << Power << endl;
}
void Lion::IEat(IHerbivore* obj)
{
    if (Power > obj->GetWeight())
    {
        Power += 10;
        cout << " Lion ate. His power is " << Power << endl;
    }
    else
    {
        Power -= 10;
        cout << " Lion ate. His power is " << Power << endl;

    }
}

Tiger::Tiger() : Power{ 120 }
{
    cout << "Create  Tige ->  Power = " << Power << endl;
}
void  Tiger::IEat(IHerbivore* obj)
{
    if (Power > obj->GetWeight())
    {
        Power += 10;
        cout << " Tiger ate. His power is " << Power << endl;
    }
    else
    {
        Power -= 10;
        cout << " Tiger ate. His power is " << Power << endl;

    }
}

Wolf::Wolf() : Power{ 130 }
{
    cout << "Create  Wolf ->  Power = " << Power << endl;
}
void Wolf::IEat(IHerbivore* obj)
{
    if (Power > obj->GetWeight())
    {
        Power += 10;
        cout << " Wolf ate. His power is " << Power << endl;
    }
    else
    {
        Power -= 10;
        cout << " Wolf ate. His power is " << Power << endl;

    }
}

IHerbivore* Africa::herbivore()
{
    cout << "\n    AFRICA!" << endl;
    return new Wildebeest();
}
ICarnivore* Africa::carnivore()
{
    cout << "\n    AFRICA!" << endl;
    return new Lion();
}
IHerbivore* NorthAmerica::herbivore()
{
    cout << "\n    NorthAmerica!" << endl;
    return new Bison();
}
ICarnivore* NorthAmerica::carnivore()
{
    cout << "\n    NorthAmerica!" << endl;
    return new Wolf();
}
IHerbivore* Eurasia::herbivore()
{
    cout << "\n    Eurasia!" << endl;
    return new Elk();
}
ICarnivore* Eurasia::carnivore()
{
    cout << "\n    Eurasia!" << endl;
    return new Tiger();
}
void AnimalWorld::MealsHerbivores()
{
    IContinent* p[] = { new NorthAmerica(), new Africa(), new Eurasia };

    for (int i = 0; i < 3; i++)
    {
        p[i]->herbivore()->IEatGrass();
    }

}
void AnimalWorld::NutritionCarnivores()
{
    IContinent* p[] = { new NorthAmerica(), new Africa(), new Eurasia };

    for (int i = 0; i < 3; i++)
    {
        p[i]->carnivore()->IEat(p[i]->herbivore());
    }

}