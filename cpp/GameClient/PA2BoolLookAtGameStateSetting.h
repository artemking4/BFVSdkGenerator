// Object: PA2BoolLookAtGameStateSetting
// ClassId: 4403
// RuntimeId: 33615
// TypeInfo: 0x0000000144E44FC0
#include "../GameClient/PA2LookAtGameStateSetting.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameClient {
    class PA2BoolLookAtGameStateSetting : public GameClient::PA2LookAtGameStateSetting {
        Boolean Value; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(PA2BoolLookAtGameStateSetting) == 0x38);
}
#pragma pack(pop)