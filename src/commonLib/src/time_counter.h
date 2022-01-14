//
// Created by chenjj on 2022/1/14.
//

#ifndef COMMONLIB_TIME_COUNTER_H
#define COMMONLIB_TIME_COUNTER_H
#include <iostream>
#include <string>
#include <time.h>

namespace common {
    class time_counter {
    public:
        time_counter(std::string n) {
            m_start = clock();
            m_strName = n;
        }

        ~time_counter() {
            m_end = clock();
            printf("%s time: %f ms\n", m_strName.c_str(),
                   (m_end - m_start) * 1.0 / CLOCKS_PER_SEC * 1000);
        }

        clock_t start() {
            m_start = clock();
            return m_start;
        }

        clock_t stop() {
            m_end = clock();
            double duration = static_cast<double>(m_end - m_start) * 1.0 / CLOCKS_PER_SEC * 1000;
            printf("[stop]%s time: %f ms\n", m_strName.c_str(), duration);
            return m_end;
        }

        double getDuration()
        {
            double duration = static_cast<double>(clock() - m_start) * 1.0 / CLOCKS_PER_SEC * 1000;
            printf("[duration]%s time: %f ms\n", m_strName.c_str(), duration);
            return duration;
        }
    private:
        clock_t m_start;
        clock_t m_end;
        std::string m_strName;
    };
}
#endif //COMMONLIB_TIME_COUNTER_H
