#pragma once
using namespace std;
class IHerbivore // травоядное животное
{
public:
    virtual void IEatGrass() = 0;
    virtual void ILife() = 0;
    virtual int GetWeight() = 0;
};
class ICarnivore // хищник
{
public:
    virtual void IEat(IHerbivore* obj) = 0;


};
class Wildebeest : public IHerbivore// травоядное животное
{
    int Weight;
public:
    Wildebeest();
    void IEatGrass()override;
    void ILife()override;
        
    int GetWeight();
};

class Bison : public IHerbivore
{
    int Weight;
public:
    Bison();
    void IEatGrass()override;
    void ILife()override;
    int GetWeight();

};

class Elk : public IHerbivore// травоядное животное
{
    int Weight;
public:
    Elk();
    void IEatGrass()  override;
    void ILife()override;
    int GetWeight();
};


class Lion : public ICarnivore
{
    int Power;
public:
    Lion();
    void IEat(IHerbivore* obj)override;

};
class Tiger : public ICarnivore
{
    int Power;
public:
    Tiger();
    void IEat(IHerbivore* obj)override;

};

class Wolf : public ICarnivore
{
    int Power;
public:
    Wolf();
    void IEat(IHerbivore* obj)override;

};

class IContinent
{
public:
    virtual  IHerbivore* herbivore() = 0;
    virtual  ICarnivore* carnivore() = 0;
};

class Africa : public IContinent
{
public:
    
    IHerbivore* herbivore()override;
    ICarnivore* carnivore()override;
};

class NorthAmerica : public IContinent
{
public:

    IHerbivore* herbivore()override;
    ICarnivore* carnivore()override;

};
class Eurasia : public IContinent
{
public:
   
    IHerbivore* herbivore()override;
    ICarnivore* carnivore()override;
};

class AnimalWorld
{
public:
    void MealsHerbivores();
    void NutritionCarnivores();
};

