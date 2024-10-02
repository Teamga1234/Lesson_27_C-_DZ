#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Passport {
protected:
    string series; 
    string number;
    string lastName;
    string firstName;  
    string dateOfBirth;
    string placeOfBirth;
    string dateOfIssue;
    string issuedBy; 
private:
    string patronymic;
    string registration;
public:
    Passport(string series, string number, string lastName, string firstName, string patronymic, string dateOfBirth, string placeOfBirth, string dateOfIssue, string issuedBy, string registration)
        : series(series), number(number), lastName(lastName), firstName(firstName), patronymic(patronymic), dateOfBirth(dateOfBirth), placeOfBirth(placeOfBirth), dateOfIssue(dateOfIssue), issuedBy(issuedBy), registration(registration) {}

   void showInfo() const {
        cout << "����: " << series << endl;
        cout << "�����: " << number << endl;
        cout << "�������: " << lastName << endl;
        cout << "��'�: " << firstName << endl;
        cout << "�� �������: " << patronymic << endl;
        cout << "���� ����������: " << dateOfBirth << endl;
        cout << "̳��� ����������: " << placeOfBirth << endl;
        cout << "���� ������ ��������: " << dateOfIssue << endl;
        cout << "��� �������: " << issuedBy << endl;
        cout << "��������: " << registration << endl;
    }


   string getSeries() const {
       return series;
   }
   string getNumber() const {
       return number;
   }
   string getLastName() const {
       return lastName;
   }
   string getFirstName() const {
       return firstName;
   }
   string getDateOfBirth() const {
       return dateOfBirth;
   }
   string getPlaceOfBirth() const {
       return placeOfBirth;
   }
   string getDateOfIssue() const {
       return dateOfIssue;
   }
   string getIssuedBy() const {
       return issuedBy;
   }
   string getPatronymic() const {
       return patronymic;
   }
   string getRegistration() const {
       return registration;
   }

   void setSeries(const string& newSeries) {
       series = newSeries;
   }
   void setNumber(const string& newNumber) {
       number = newNumber;
   }
   void setLastName(const string& newLastName) {
       lastName = newLastName;
   }
   void setFirstName(const string& newFirstName) {
       firstName = newFirstName;
   }
   void setDateOfBirth(const string& newDateOfBirth) {
       dateOfBirth = newDateOfBirth;
   }
   void setPlaceOfBirth(const string& newPlaceOfBirth) {
       placeOfBirth = newPlaceOfBirth;
   }
   void setDateOfIssue(const string& newDateOfIssue) {
       dateOfIssue = newDateOfIssue;
   }
   void setIssuedBy(const string& newIssuedBy) {
       issuedBy = newIssuedBy;
   }
   void setPatronymic(const string& newPatronymic) {
       patronymic = newPatronymic;
   }
   void setRegistration(const string& newRegistration) {
       registration = newRegistration;
   }
};

class Visa {
protected:
    string country; 
    string startDate;
    string endDate; 

public:
    Visa(string country, string startDate, string endDate) : country(country), startDate(startDate), endDate(endDate) {}

    void showInfo() const {
        cout << "�����: " << country << endl;
        cout << "���� �������� ���: " << startDate << endl;
        cout << "���� �������� ���: " << endDate << endl;
    }

    string getCountry() const {
        return country;
    }
    string getStartDate() const {
        return startDate;
    }
    string getEndDate() const {
        return endDate;
    }

    void setCountry(const string& newCountry) {
        country = newCountry;
    }
    void setStartDate(const string& newStartDate) {
        startDate = newStartDate;
    }
    void setEndDate(const string& newEndDate) {
        endDate = newEndDate;
    }
};
