// Object: UpdateWallOfDeathData
// ClassId: 4510
// RuntimeId: 30385
// TypeInfo: 0x0000000144E2B4C0
#include "../Emitter/UpdateCollisionData.h"
#include "../Emitter/WallOfDeathOrientation.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateWallOfDeathData : public Emitter::UpdateCollisionData {
        Emitter::WallOfDeathOrientation Orientation; // 0x80
        char pad_0x84[0x4];
    }; // 0x88
    static_assert(sizeof(UpdateWallOfDeathData) == 0x88);
}
#pragma pack(pop)