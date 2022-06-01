gettext:
	find . -name "*.cpp" -o -name "*.h" | xargs xgettext --from-code="UTF-8" --language=C++ --keyword=STR --keyword=STRN --keyword=STR_C --add-comments --sort-output -o lang/template.pot -


translate:
	poedit lang/pl.po
