struct Prim
{
	virtual void a() = 0;
};

struct Foo:Prim
{
	Foo();
	void a();
};

