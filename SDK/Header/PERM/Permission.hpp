#pragma once
#include <third-party/Nlohmann/json.hpp>
#include "Foundation.hpp"

namespace PERM {

    struct PermInstance {
        std::string name;
        bool enabled;
        ::nlohmann::json extra;

        static constexpr const std::string_view permNameInvalidChars = " \t\n\r\f\v";
        /**
         * @brief Get the namespace of the permission.
         *
         * @return std::string  The namespace of the permission.
         */
        inline std::string namespc() const {
            return this->name.substr(0, this->name.find_first_of(':'));
        }

        static bool isValidPermissionName(const std::string& name) {
            return name.find_first_of(PermInstance::permNameInvalidChars.data()) == std::string::npos && // Not contain invalid chars
                   name.find_first_of(':') != std::string::npos &&                                       // Has at least one :
                   name.find_first_of(':') != 0 &&                                                       // Not start with :
                   name.find_last_of(':') != name.size() - 1;                                            // Not end with :
        }
    };

    struct PermInfo {
        std::string name;
        std::string desc;
    };

    using Permissions = PermContainer<PermInstance>;
    using PermInfoList = PermContainer<PermInfo>;

} // namespace PERM