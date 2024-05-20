int main() {
    vector<Libro> libros;
    libros.push_back({"Eloquent Javascript", "Marijin Haverbeke", "Programacion", 2024, "Disponible"});
	libros.push_back({"Fundamentos de Programacion usando PSeInt", "Ivan Garcia", "Logica", 2014, "Disponible"});
    menu(libros);
    return 0;
}
