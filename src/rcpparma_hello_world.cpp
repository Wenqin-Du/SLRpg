// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

// we only include RcppArmadillo.h which pulls Rcpp.h in for us
#include "RcppArmadillo.h"

// via the depends attribute we tell Rcpp to create hooks for
// RcppArmadillo so that the build process will know what to do
//
// [[Rcpp::depends(RcppArmadillo)]]

// simple example of creating two matrices and
// returning the result of an operatioon on them
//
// via the exports attribute we tell Rcpp to make this function
// available from R
// and we can use Rcpp::List to return multy subjects at the same time
//
// [[Rcpp::export]]
Rcpp::List SLRraw(const arma::colvec & x, const arma::colvec & y) {
    double y_bar = mean(y);
    double x_bar = mean(x);
    double b1 = arma::as_scalar((y - y_bar).t() * (x - x_bar)) / arma::as_scalar((x - x_bar).t() * (x - x_bar));
    double b0 = y_bar - b1 * x_bar;
    arma::rowvec coef = {b0,b1};
    double mse = arma::as_scalar((y - b0 - b1 * x).t() * (y - b0 - b1 * x)) / (x.n_elem - 2);

    return Rcpp::List::create(Rcpp::Named("coefficients") = coef,
                              Rcpp::Named("MSE") = mse);
}




