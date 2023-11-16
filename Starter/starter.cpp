#include <cstdlib>
#include <iostream>

static void StartUI();
static void StartApp();
static void StartPersistence();

int main()
{
    StartUI();
    StartApp();
    StartPersistence();

    return 0;
}

static void StartUI()
{
    std::system("cd ../UI/ && ./ui");
}

static void StartApp()
{
    std::system("cd ../App/ && ./app");
}

static void StartPersistence()
{
    std::system("cd ../Persistence/ && ./persistence");
}