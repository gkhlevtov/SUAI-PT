#pragma once
#include "conference.h"

class Admin : public Conference
{
private:
    std::string name;
    std::string position;
    std::string responsibility;

public:
    Admin();
    Admin(const std::string &, const std::string &, const std::string &);
    Admin(const Admin &);
    ~Admin();

    void Show() const override;
    void Edit() override;
    void Save(std::ofstream &file) const override;
    void Load(std::ifstream &file) override;
};
