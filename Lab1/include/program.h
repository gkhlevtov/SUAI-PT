#pragma once
#include "conference.h"

class Program : public Conference
{
private:
    std::string day;
    std::string time;
    std::string title;

public:
    Program();
    Program(const std::string &, const std::string &, const std::string &);
    Program(const Program &);
    ~Program();

    void Show() const override;
    void Edit() override;
    void Save(std::ofstream &file) const override;
    void Load(std::ifstream &file) override;

    Conference* Clone() const override;
    ConfType Type() const override;
};
