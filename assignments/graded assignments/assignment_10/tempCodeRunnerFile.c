        s->year = 2018;
        printf("\n %d %s %c %d", s->roll_number, s->name, s->department, s->year);
    }

    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        s->department = 'Maths';
        s->year = 2018;
        printf("\n %d %s %c %d", s->roll_number, s->name, s->department, s->year);
    }

// function calls //

printf("\n Please enter the year of the students you want to search for: ");
signed year = null;
scanf("%d", &year);
print_all_names_in_specific_year(s, year);

printf("\n Please enter the roll number of the student you want to search for: ");
signed roll_number = null;
scanf("%d", &roll_number);
roll_number_student_search(s, roll_number);

return null;
}

// function definitions //
