// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// SLRraw
Rcpp::List SLRraw(const arma::colvec& x, const arma::colvec& y);
RcppExport SEXP _SLRpg_SLRraw(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(SLRraw(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SLRpg_SLRraw", (DL_FUNC) &_SLRpg_SLRraw, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_SLRpg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
