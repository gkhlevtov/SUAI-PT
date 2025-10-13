#pragma once
#include "conference.h"

class Speaker : public Conference
{
private:
    std::string name;
    std::string organization;
    std::string report;
    std::string annotation;

public:
    Speaker();
    Speaker(const std::string &, const std::string &, const std::string &, const std::string &);
    Speaker(const Speaker &);
    ~Speaker();

    void Show() const override;
    void Edit() override;
    void Save(std::ofstream &file) const override;
    void Load(std::ifstream &file) override;

    Conference* Clone() const override;
    ConfType Type() const override;
};
