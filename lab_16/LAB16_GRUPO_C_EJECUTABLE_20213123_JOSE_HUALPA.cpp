#include <iostream>
using namespace std;

class WinFactory
{
    public:
        virtual string Draw() const = 0;

};
class WinButton : public WinFactory
{
    public:
        string Draw() const override
        {
            return "BUTTON WINDOWS";

        }
};
class WinCheckBox : public WinFactory
{
	string Draw() const override
	{
		return "CHECKBOX WINDOWS";
	}
};



class MacFactory
{
    public:
        virtual string Draw() const = 0;
        virtual string draw(const WinFactory& colaborador) const =0;
};
class MacButton : public MacFactory
{
    public:
        string Draw() const override
        {
            return "Dibujando BUTTON MAC";
        }
        string draw(const WinFactory& colaborador) const override
        {
            const string resultado= colaborador.Draw();
            return "Dibujando "+resultado;
        }
};

class MacCheckBox : public MacFactory
{
    public:
        string Draw() const override
        {
            return "Dibujando CHECKBOX MAC.";
        }
        string draw(const WinFactory& colaborador) const override
        {
            const string resultado = colaborador.Draw();
            return "Dibujando "+resultado;
        }
};


class GUIFactory
{
    public:
        virtual WinFactory *CrearControlW() const = 0;
        virtual MacFactory *CrearControlM() const = 0;
};

class Button : public GUIFactory
{
        WinFactory *CrearControlW() const override
        {
            return new WinButton();
        }
        MacFactory *CrearControlM() const override
        {
            return new MacButton();
        }
};

class CheckBox : public GUIFactory
{
	WinFactory *CrearControlW() const override
	{
		return new WinCheckBox();
	}
	MacFactory *CrearControlM() const override
	{
		return new MacCheckBox();
	}
};

void Aplication(const GUIFactory& x, int n)
{
	const WinFactory* Windows = x.CrearControlW();
	const MacFactory* Mac = x.CrearControlM();

	if(n == 1)
    {
		cout<<"\n"<<Mac->draw(*Windows)<<endl;
		delete Windows;
	}
	else
	{
		cout<<"\n"<<Mac->Draw()<<endl;
		delete Mac;
	}
}

int main() {
	cout<<"Cliente: Windows ";
	Button* f1 = new Button();
	Aplication(*f1, 1); // 1 - Windows
	delete f1;

	cout <<endl;

	cout<<"Cliente: Mac ";
	Button* f2 = new Button();
	Aplication(*f2, 2);
	delete f2;

	return 0;
}
