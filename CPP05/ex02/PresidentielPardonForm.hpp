#ifndef PRESIDENTIELPARDONFORM_HPP
# define PRESIDENTIELPARDONFORM_HPP
# include <iostream>

class PresidentielPardonForm
{
    public:
        PresidentielPardonForm(void);
        PresidentielPardonForm(const PresidentielPardonForm& other);
        PresidentielPardonForm &operator=(const PresidentielPardonForm &other);
        ~PresidentielPardonForm();
};

#endif

