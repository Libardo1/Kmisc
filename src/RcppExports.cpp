// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// char_to_factor
RObject char_to_factor(RObject x_, bool inplace);
RcppExport SEXP Kmisc_char_to_factor(SEXP x_SEXP, SEXP inplaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RObject >::type x_(x_SEXP );
        Rcpp::traits::input_parameter< bool >::type inplace(inplaceSEXP );
        RObject __result = char_to_factor(x_, inplace);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tableRcpp
IntegerVector tableRcpp(SEXP x);
RcppExport SEXP Kmisc_tableRcpp(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        IntegerVector __result = tableRcpp(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// counts
IntegerVector counts(SEXP x);
RcppExport SEXP Kmisc_counts(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        IntegerVector __result = counts(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// extract_rows_from_file_to_file
void extract_rows_from_file_to_file(std::string input_file_name, std::string output_file_name, std::string delim, std::vector< std::string > items_to_keep, int column_to_check);
RcppExport SEXP Kmisc_extract_rows_from_file_to_file(SEXP input_file_nameSEXP, SEXP output_file_nameSEXP, SEXP delimSEXP, SEXP items_to_keepSEXP, SEXP column_to_checkSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type input_file_name(input_file_nameSEXP );
        Rcpp::traits::input_parameter< std::string >::type output_file_name(output_file_nameSEXP );
        Rcpp::traits::input_parameter< std::string >::type delim(delimSEXP );
        Rcpp::traits::input_parameter< std::vector< std::string > >::type items_to_keep(items_to_keepSEXP );
        Rcpp::traits::input_parameter< int >::type column_to_check(column_to_checkSEXP );
        extract_rows_from_file_to_file(input_file_name, output_file_name, delim, items_to_keep, column_to_check);
    }
    return R_NilValue;
END_RCPP
}
// extract_rows_from_file
std::vector<std::string> extract_rows_from_file(std::string input_file_name, std::string delim, std::vector< std::string > items_to_keep, int column_to_check);
RcppExport SEXP Kmisc_extract_rows_from_file(SEXP input_file_nameSEXP, SEXP delimSEXP, SEXP items_to_keepSEXP, SEXP column_to_checkSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type input_file_name(input_file_nameSEXP );
        Rcpp::traits::input_parameter< std::string >::type delim(delimSEXP );
        Rcpp::traits::input_parameter< std::vector< std::string > >::type items_to_keep(items_to_keepSEXP );
        Rcpp::traits::input_parameter< int >::type column_to_check(column_to_checkSEXP );
        std::vector<std::string> __result = extract_rows_from_file(input_file_name, delim, items_to_keep, column_to_check);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fast_factor
SEXP fast_factor(SEXP x, SEXP levels);
RcppExport SEXP Kmisc_fast_factor(SEXP xSEXP, SEXP levelsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        Rcpp::traits::input_parameter< SEXP >::type levels(levelsSEXP );
        SEXP __result = fast_factor(x, levels);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// matches
IntegerMatrix matches(List x);
RcppExport SEXP Kmisc_matches(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        IntegerMatrix __result = matches(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read
SEXP read(std::string path, bool lines);
RcppExport SEXP Kmisc_read(SEXP pathSEXP, SEXP linesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type path(pathSEXP );
        Rcpp::traits::input_parameter< bool >::type lines(linesSEXP );
        SEXP __result = read(path, lines);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// split_file
void split_file(std::string path, std::string dir, std::string basename, std::string path_sep, std::string sep, std::string prepend, std::string file_ext, int column, int skip, bool verbose);
RcppExport SEXP Kmisc_split_file(SEXP pathSEXP, SEXP dirSEXP, SEXP basenameSEXP, SEXP path_sepSEXP, SEXP sepSEXP, SEXP prependSEXP, SEXP file_extSEXP, SEXP columnSEXP, SEXP skipSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type path(pathSEXP );
        Rcpp::traits::input_parameter< std::string >::type dir(dirSEXP );
        Rcpp::traits::input_parameter< std::string >::type basename(basenameSEXP );
        Rcpp::traits::input_parameter< std::string >::type path_sep(path_sepSEXP );
        Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP );
        Rcpp::traits::input_parameter< std::string >::type prepend(prependSEXP );
        Rcpp::traits::input_parameter< std::string >::type file_ext(file_extSEXP );
        Rcpp::traits::input_parameter< int >::type column(columnSEXP );
        Rcpp::traits::input_parameter< int >::type skip(skipSEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        split_file(path, dir, basename, path_sep, sep, prepend, file_ext, column, skip, verbose);
    }
    return R_NilValue;
END_RCPP
}
// split_runs_numeric
List split_runs_numeric(NumericVector X);
RcppExport SEXP Kmisc_split_runs_numeric(SEXP XSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP );
        List __result = split_runs_numeric(X);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// split_runs_character
List split_runs_character(std::vector< std::string > X);
RcppExport SEXP Kmisc_split_runs_character(SEXP XSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type X(XSEXP );
        List __result = split_runs_character(X);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// split_runs_one
List split_runs_one(std::string x);
RcppExport SEXP Kmisc_split_runs_one(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type x(xSEXP );
        List __result = split_runs_one(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// split
SEXP split(SEXP x, SEXP y, SEXP na_last_);
RcppExport SEXP Kmisc_split(SEXP xSEXP, SEXP ySEXP, SEXP na_last_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        Rcpp::traits::input_parameter< SEXP >::type y(ySEXP );
        Rcpp::traits::input_parameter< SEXP >::type na_last_(na_last_SEXP );
        SEXP __result = split(x, y, na_last_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stack_list_df
List stack_list_df(List& X, std::vector< std::string > classes, int num_elem, bool make_row_names, std::string name, bool keep_list_index, std::string index_name);
RcppExport SEXP Kmisc_stack_list_df(SEXP XSEXP, SEXP classesSEXP, SEXP num_elemSEXP, SEXP make_row_namesSEXP, SEXP nameSEXP, SEXP keep_list_indexSEXP, SEXP index_nameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List& >::type X(XSEXP );
        Rcpp::traits::input_parameter< std::vector< std::string > >::type classes(classesSEXP );
        Rcpp::traits::input_parameter< int >::type num_elem(num_elemSEXP );
        Rcpp::traits::input_parameter< bool >::type make_row_names(make_row_namesSEXP );
        Rcpp::traits::input_parameter< std::string >::type name(nameSEXP );
        Rcpp::traits::input_parameter< bool >::type keep_list_index(keep_list_indexSEXP );
        Rcpp::traits::input_parameter< std::string >::type index_name(index_nameSEXP );
        List __result = stack_list_df(X, classes, num_elem, make_row_names, name, keep_list_index, index_name);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// str_collapse_list
CharacterVector str_collapse_list(List x);
RcppExport SEXP Kmisc_str_collapse_list(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        CharacterVector __result = str_collapse_list(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// str_collapse_str
String str_collapse_str(CharacterVector x);
RcppExport SEXP Kmisc_str_collapse_str(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        String __result = str_collapse_str(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
