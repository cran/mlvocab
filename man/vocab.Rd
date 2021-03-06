% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/vocab.R
\name{vocab}
\alias{vocab}
\alias{update_vocab}
\alias{prune_vocab}
\title{Build and manipulate vocabularies}
\usage{
vocab(corpus, ngram = c(1, 1), ngram_sep = "_",
  regex = "[[:space:]]+")

update_vocab(vocab, corpus)

prune_vocab(vocab, max_terms = Inf, term_count_min = 1L,
  term_count_max = Inf, doc_proportion_min = 0,
  doc_proportion_max = 1, doc_count_min = 1L, doc_count_max = Inf,
  nbuckets = attr(vocab, "nbuckets"))
}
\arguments{
\item{corpus}{A collection of ASCII or UTF-8 encoded documents. It can be a
list of character vectors, a character vector or a data.frame with at
least two columns - id and documents. See details.}

\item{ngram}{a vector of length 2 of the form \code{c(min_ngram, max_ngram)} or a
singleton \code{max_ngram} which is equivalent to \code{c(1L, max_ngram)}.}

\item{ngram_sep}{separator to link terms within ngrams.}

\item{regex}{a regexp to be used for segmentation of documents when \code{corpus}
is a character vector; ignored otherwise. Defaults to a set of basic white
space separators. \code{NULL} means no segmentation. The regexp grammar is the
extended ECMAScript as implemented in C++11.}

\item{vocab}{\code{data.frame} obtained from a call to \code{\link[=vocab]{vocab()}}.}

\item{max_terms}{max number of terms to preserve}

\item{term_count_min}{keep terms occurring at \emph{least} this many times over
all docs}

\item{term_count_max}{keep terms occurring at \emph{most} this many times over
all docs}

\item{doc_count_min, doc_proportion_min}{keep terms appearing in at \emph{least}
this many docs}

\item{doc_count_max, doc_proportion_max}{keep terms appearing in at \emph{most}
this many docs}

\item{nbuckets}{How many unknown buckets to create along the remaining terms
of the pruned \code{vocab}. All pruned terms will be hashed into this many
buckets and the corresponding statistics (\code{term_count} and \code{doc_count})
updated.}
}
\description{
\code{\link[=vocab]{vocab()}} creates a vocabulary from a text corpus; \code{\link[=update_vocab]{update_vocab()}} and
\code{\link[=prune_vocab]{prune_vocab()}} update and prune an existing vocabulary respectively.
}
\details{
When \code{corpus} is a character vector each string is tokenized with \code{regex}
with the internal tokenizer. When \code{corpus} has names, names will be used to
name the output whenever appropriate.

When corpus is a \code{data.frame}, the documents must be in last column,  which
can be either a list of strings or a character vector. All other columns are
considered document ids. If first column is a character vector most function
will use it to name the output.
}
\examples{

corpus <-
   list(a = c("The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"),
        b = c("the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog",
              "the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"))

vocab(corpus)
vocab(corpus, ngram = 3)
vocab(corpus, ngram = c(2, 3))

v <- vocab(corpus)

extra_corpus <- list(extras = c("apples", "oranges"))
v <- update_vocab(v, extra_corpus)
v

prune_vocab(v, max_terms = 7)
prune_vocab(v, term_count_min = 2)
prune_vocab(v, max_terms = 7, nbuckets = 2)

}
\references{
https://en.cppreference.com/w/cpp/regex/ecmascript
}
