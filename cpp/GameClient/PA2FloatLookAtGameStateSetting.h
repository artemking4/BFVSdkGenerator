// Object: PA2FloatLookAtGameStateSetting
// ClassId: 4404
// RuntimeId: 24250
// TypeInfo: 0x0000000144E44F40
#include "../GameClient/PA2LookAtGameStateSetting.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameClient {
    class PA2FloatLookAtGameStateSetting : public GameClient::PA2LookAtGameStateSetting {
        Float32 Value; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(PA2FloatLookAtGameStateSetting) == 0x38);
}
#pragma pack(pop)