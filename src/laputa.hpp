#ifndef LAPUTA_LAPUTA_HPP
#define LAPUTA_LAPUTA_HPP

#include <cstdarg>
#include <cstddef>

#include "config.hpp"
#include "state.hpp"

#define LAPUTA_VERSION "Laputa 1.0"
#define LAPUTA_RELEASE "Laputa 1.0.0"
#define LAPUTA_VERSION_NUM 100
#define LAPUTA_AUTHORS "Entropy Increaser"

#define LAPUTA_SIGNATURE "\033Laputa"

#define LAPUTA_MULTRET (-1)

#define LAPUTA_REGISTRY_INDEX (-10000)
#define LAPUTA_ENVIRON_INDEX  (-10001)
#define LAPUTA_GLOBALS_INDEX  (-10002)
#define LAPUTA_UP_VALUE_INDEX(i) (LAPUTA_GLOBALS_INDEX-(i))

namespace laputa {
	enum thread_status {
		OK = 0,
		YIELD = 1,
		ERR_RUN = 2,
		ERR_SYNTAX = 3,
		ERR_MEM = 4,
		ERR_ERR = 5
	};

	typedef int (*function) (state*);
}

#endif // LAPUTAP_LAPUTA_HPP
