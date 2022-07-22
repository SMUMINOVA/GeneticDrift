# Genetic drift

## The essence of the phenomenon

Although the best-known mechanism of evolution is natural selection, it is far from the only mechanism - and perhaps not the most influential.

Among other mechanisms, one can note the so-called. "genetic drift". This is a random process leading to a change in the frequencies of occurrence in a population of alleles of one gene, not associated with the influence of these alleles on the phenotype.

Let's take a simplified model: the population of diploid organisms is limited in size, the alleles of one gene are inherited independently of other genes, the probability of inheriting one of the two alleles of the parent is 50%, generations in the population do not overlap and the population size does not change, and the gene pool of the next generation is obtained by a random sample from the gene pool of the previous generation (this is basically the same as the Wright-Fisher model, see https://en.wikipedia.org/wiki/Genetic_drift).

Then for one particular gene there are (initially) 2 alleles, with different frequencies of occurrence in the original population, and there is a random process of changing these frequencies (since the inheritance of a particular allele is a completely random process). For each specific allele, the process can converge in one of two extremes: the complete absence of the allele in the population (disappearance) or the total presence (fixation - the frequency of occurrence of the allele in the population becomes 100%).

## Formulation of the problem

Imagine a population of annual plants, for simplicity we will assume that only one new plant grows from the seeds of one plant. So every year
there is a complete change of generations, while the size of the population does not change, only the distribution of alleles of a particular gene changes.

We are interested in the petal color gene, which initially has two alleles in the population - A (blue) and B (white).
The trait inheritance model is a simple Mendelian, i.e. the transmission of the allele to the offspring is equally likely, and the manifestation of the phenotype is dominant-recessive, only AA individuals will have blue petals.

Through simulation, the program estimates what is the probability of the disappearance or fixation of the blue color of the petals in a given population.

