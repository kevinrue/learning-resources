#include <string_view>
#include <seqan3/io/sequence_file/all.hpp>

// Alias for a c-style string.
using character_string = char const *;

int main(int argc, character_string argv[])
{
	std::string_view fastq_file_path{argv[1]};
	std::string_view fasta_file_out_path{argv[2]};

	seqan3::sequence_file_output{fasta_file_out_path} =
		seqan3::sequence_file_input{fastq_file_path};
}
