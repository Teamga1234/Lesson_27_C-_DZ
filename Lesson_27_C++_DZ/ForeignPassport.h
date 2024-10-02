#pragma once
#include "Passport.h"
class ForeignPassport : public Passport
{
	vector<Visa> visas;
public:
    ForeignPassport(string series, string number, string lastName, string firstName, string patronymic,
        string dateOfBirth, string placeOfBirth, string dateOfIssue, string issuedBy,
        string registration, const vector<Visa>& visas = {})
        : Passport(series, number, lastName, firstName, patronymic, dateOfBirth, placeOfBirth, dateOfIssue, issuedBy, registration),
        visas(visas) {}
	void showInfo() const {
		Passport::showInfo();
        cout << "Візи:" << endl;
        if (visas.empty()) {
            cout << "Немає віз." << endl;
        }
        else {
            for (const auto& visa : visas) {
                visa.showInfo();
                cout << "-----------------" << endl;
            }
        }

	}
    vector<Visa> getVisas() const {
        return visas;
    } 
    void setVisas(const vector<Visa>& newVisas) {
        visas = newVisas;
    }
    void addVisa(const Visa& newVisa) {
        visas.push_back(newVisa);
    }


};

