// Object: URLConfigData
// ClassId: 5548
// RuntimeId: 24360
// TypeInfo: 0x0000000144F7C010
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../WebUtils/WebUtilsEnvironment.h"

#pragma pack(push, 8)
namespace WebUtils {
    class URLConfigData : public Core::DataContainer {
        CString Name; // 0x18
        CString BaseUrl; // 0x20
        CString Url; // 0x28
        WebUtils::WebUtilsEnvironment Environment; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(URLConfigData) == 0x38);
}
#pragma pack(pop)