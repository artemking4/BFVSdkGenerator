// Object: PointEnvelope
// ClassId: 4446
// RuntimeId: 28370
// TypeInfo: 0x0000000144E01DF0
#include "../Core/DataContainer.h"
#include "../Audio/PointEnvelopePoint.h"

#pragma pack(push, 8)
namespace Audio {
    class PointEnvelope : public Core::DataContainer {
        Array<Audio::PointEnvelopePoint> Points; // 0x18
    }; // 0x20
    static_assert(sizeof(PointEnvelope) == 0x20);
}
#pragma pack(pop)