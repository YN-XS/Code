class Person:
    person_amount = 7600000000

    @classmethod
    def class_method_name(cls):
        print(cls.person_amount)


Person.class_method_name()
print(Person.person_amount)