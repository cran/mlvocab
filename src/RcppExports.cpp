// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// murmur3hash
SEXP murmur3hash(SEXP x);
RcppExport SEXP _mlvocab_murmur3hash(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(murmur3hash(x));
    return rcpp_result_gen;
END_RCPP
}
// C_vocab
DataFrame C_vocab(SEXP corpus0, const DataFrame& oldvocab);
RcppExport SEXP _mlvocab_C_vocab(SEXP corpus0SEXP, SEXP oldvocabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type oldvocab(oldvocabSEXP);
    rcpp_result_gen = Rcpp::wrap(C_vocab(corpus0, oldvocab));
    return rcpp_result_gen;
END_RCPP
}
// C_prune_embeddings
NumericMatrix C_prune_embeddings(const DataFrame& vocabdf, NumericMatrix& embeddings, bool by_row, int nbuckets, int min_to_average);
RcppExport SEXP _mlvocab_C_prune_embeddings(SEXP vocabdfSEXP, SEXP embeddingsSEXP, SEXP by_rowSEXP, SEXP nbucketsSEXP, SEXP min_to_averageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type embeddings(embeddingsSEXP);
    Rcpp::traits::input_parameter< bool >::type by_row(by_rowSEXP);
    Rcpp::traits::input_parameter< int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< int >::type min_to_average(min_to_averageSEXP);
    rcpp_result_gen = Rcpp::wrap(C_prune_embeddings(vocabdf, embeddings, by_row, nbuckets, min_to_average));
    return rcpp_result_gen;
END_RCPP
}
// C_rehash_vocab
DataFrame C_rehash_vocab(const DataFrame& pruned_vocabdf, const DataFrame& orig_vocabdf, const int nbuckets);
RcppExport SEXP _mlvocab_C_rehash_vocab(SEXP pruned_vocabdfSEXP, SEXP orig_vocabdfSEXP, SEXP nbucketsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type pruned_vocabdf(pruned_vocabdfSEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type orig_vocabdf(orig_vocabdfSEXP);
    Rcpp::traits::input_parameter< const int >::type nbuckets(nbucketsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rehash_vocab(pruned_vocabdf, orig_vocabdf, nbuckets));
    return rcpp_result_gen;
END_RCPP
}
// C_corpus2ixseq
SEXP C_corpus2ixseq(SEXP corpus0, const DataFrame& vocabdf, bool keep_unknown, int nbuckets, bool reverse);
RcppExport SEXP _mlvocab_C_corpus2ixseq(SEXP corpus0SEXP, SEXP vocabdfSEXP, SEXP keep_unknownSEXP, SEXP nbucketsSEXP, SEXP reverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_unknown(keep_unknownSEXP);
    Rcpp::traits::input_parameter< int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< bool >::type reverse(reverseSEXP);
    rcpp_result_gen = Rcpp::wrap(C_corpus2ixseq(corpus0, vocabdf, keep_unknown, nbuckets, reverse));
    return rcpp_result_gen;
END_RCPP
}
// C_corpus2ixdf
DataFrame C_corpus2ixdf(SEXP corpus0, const DataFrame& vocabdf, bool keep_unknown, int nbuckets, bool reverse, bool asfactor);
RcppExport SEXP _mlvocab_C_corpus2ixdf(SEXP corpus0SEXP, SEXP vocabdfSEXP, SEXP keep_unknownSEXP, SEXP nbucketsSEXP, SEXP reverseSEXP, SEXP asfactorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_unknown(keep_unknownSEXP);
    Rcpp::traits::input_parameter< int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< bool >::type reverse(reverseSEXP);
    Rcpp::traits::input_parameter< bool >::type asfactor(asfactorSEXP);
    rcpp_result_gen = Rcpp::wrap(C_corpus2ixdf(corpus0, vocabdf, keep_unknown, nbuckets, reverse, asfactor));
    return rcpp_result_gen;
END_RCPP
}
// C_corpus2ixmat
IntegerMatrix C_corpus2ixmat(SEXP corpus0, const DataFrame& vocabdf, int maxlen, bool pad_right, bool trunc_right, bool keep_unknown, int nbuckets, bool reverse);
RcppExport SEXP _mlvocab_C_corpus2ixmat(SEXP corpus0SEXP, SEXP vocabdfSEXP, SEXP maxlenSEXP, SEXP pad_rightSEXP, SEXP trunc_rightSEXP, SEXP keep_unknownSEXP, SEXP nbucketsSEXP, SEXP reverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< int >::type maxlen(maxlenSEXP);
    Rcpp::traits::input_parameter< bool >::type pad_right(pad_rightSEXP);
    Rcpp::traits::input_parameter< bool >::type trunc_right(trunc_rightSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_unknown(keep_unknownSEXP);
    Rcpp::traits::input_parameter< int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< bool >::type reverse(reverseSEXP);
    rcpp_result_gen = Rcpp::wrap(C_corpus2ixmat(corpus0, vocabdf, maxlen, pad_right, trunc_right, keep_unknown, nbuckets, reverse));
    return rcpp_result_gen;
END_RCPP
}
// C_dtm
SEXP C_dtm(SEXP corpus0, const DataFrame& vocabdf, const Nullable<NumericVector>& term_weights, const int nbuckets, const std::string& output, const int ngram_min, const int ngram_max);
RcppExport SEXP _mlvocab_C_dtm(SEXP corpus0SEXP, SEXP vocabdfSEXP, SEXP term_weightsSEXP, SEXP nbucketsSEXP, SEXP outputSEXP, SEXP ngram_minSEXP, SEXP ngram_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector>& >::type term_weights(term_weightsSEXP);
    Rcpp::traits::input_parameter< const int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_max(ngram_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_dtm(corpus0, vocabdf, term_weights, nbuckets, output, ngram_min, ngram_max));
    return rcpp_result_gen;
END_RCPP
}
// C_tdm
SEXP C_tdm(SEXP corpus0, const DataFrame& vocabdf, const Nullable<NumericVector>& term_weights, const int nbuckets, const std::string& output, const int ngram_min, const int ngram_max);
RcppExport SEXP _mlvocab_C_tdm(SEXP corpus0SEXP, SEXP vocabdfSEXP, SEXP term_weightsSEXP, SEXP nbucketsSEXP, SEXP outputSEXP, SEXP ngram_minSEXP, SEXP ngram_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector>& >::type term_weights(term_weightsSEXP);
    Rcpp::traits::input_parameter< const int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_max(ngram_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tdm(corpus0, vocabdf, term_weights, nbuckets, output, ngram_min, ngram_max));
    return rcpp_result_gen;
END_RCPP
}
// C_tcm
SEXP C_tcm(SEXP corpus0, const DataFrame& vocabdf, const Nullable<NumericVector>& term_weights, const int nbuckets, const std::string& output, const size_t window_size, const std::vector<double>& window_weights, const std::string& context, const int ngram_min, const int ngram_max);
RcppExport SEXP _mlvocab_C_tcm(SEXP corpus0SEXP, SEXP vocabdfSEXP, SEXP term_weightsSEXP, SEXP nbucketsSEXP, SEXP outputSEXP, SEXP window_sizeSEXP, SEXP window_weightsSEXP, SEXP contextSEXP, SEXP ngram_minSEXP, SEXP ngram_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus0(corpus0SEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type vocabdf(vocabdfSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector>& >::type term_weights(term_weightsSEXP);
    Rcpp::traits::input_parameter< const int >::type nbuckets(nbucketsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const size_t >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type window_weights(window_weightsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type context(contextSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< const int >::type ngram_max(ngram_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tcm(corpus0, vocabdf, term_weights, nbuckets, output, window_size, window_weights, context, ngram_min, ngram_max));
    return rcpp_result_gen;
END_RCPP
}
// C_is_ascii
LogicalVector C_is_ascii(const CharacterVector& vec);
RcppExport SEXP _mlvocab_C_is_ascii(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(C_is_ascii(vec));
    return rcpp_result_gen;
END_RCPP
}
// C_wordgram
CharacterVector C_wordgram(const CharacterVector& vec, int ngram_min, int ngram_max, std::string sep);
RcppExport SEXP _mlvocab_C_wordgram(SEXP vecSEXP, SEXP ngram_minSEXP, SEXP ngram_maxSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< int >::type ngram_max(ngram_maxSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(C_wordgram(vec, ngram_min, ngram_max, sep));
    return rcpp_result_gen;
END_RCPP
}
// C_ngram_weights
NumericVector C_ngram_weights(const NumericVector& weights, int ngram_min, int ngram_max);
RcppExport SEXP _mlvocab_C_ngram_weights(SEXP weightsSEXP, SEXP ngram_minSEXP, SEXP ngram_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< int >::type ngram_max(ngram_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ngram_weights(weights, ngram_min, ngram_max));
    return rcpp_result_gen;
END_RCPP
}
// C_tokenize
SEXP C_tokenize(SEXP input, SEXP rx);
RcppExport SEXP _mlvocab_C_tokenize(SEXP inputSEXP, SEXP rxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rx(rxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tokenize(input, rx));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mlvocab_murmur3hash", (DL_FUNC) &_mlvocab_murmur3hash, 1},
    {"_mlvocab_C_vocab", (DL_FUNC) &_mlvocab_C_vocab, 2},
    {"_mlvocab_C_prune_embeddings", (DL_FUNC) &_mlvocab_C_prune_embeddings, 5},
    {"_mlvocab_C_rehash_vocab", (DL_FUNC) &_mlvocab_C_rehash_vocab, 3},
    {"_mlvocab_C_corpus2ixseq", (DL_FUNC) &_mlvocab_C_corpus2ixseq, 5},
    {"_mlvocab_C_corpus2ixdf", (DL_FUNC) &_mlvocab_C_corpus2ixdf, 6},
    {"_mlvocab_C_corpus2ixmat", (DL_FUNC) &_mlvocab_C_corpus2ixmat, 8},
    {"_mlvocab_C_dtm", (DL_FUNC) &_mlvocab_C_dtm, 7},
    {"_mlvocab_C_tdm", (DL_FUNC) &_mlvocab_C_tdm, 7},
    {"_mlvocab_C_tcm", (DL_FUNC) &_mlvocab_C_tcm, 10},
    {"_mlvocab_C_is_ascii", (DL_FUNC) &_mlvocab_C_is_ascii, 1},
    {"_mlvocab_C_wordgram", (DL_FUNC) &_mlvocab_C_wordgram, 4},
    {"_mlvocab_C_ngram_weights", (DL_FUNC) &_mlvocab_C_ngram_weights, 3},
    {"_mlvocab_C_tokenize", (DL_FUNC) &_mlvocab_C_tokenize, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_mlvocab(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
