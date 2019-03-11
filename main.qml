import QtQuick 2.0
import OpenGlBufferItem 1.0
Grid {
    columns: 2
    spacing: 2
    width: 1280
    height: 720
    OpenGlBufferItem {
        width: 640
        height: 360
        a: 1
    }
    OpenGlBufferItem {
        width: 640
        height: 360
        a: 2
    }
    OpenGlBufferItem {
        width: 640
        height: 360
        a: 3
    }
    OpenGlBufferItem {
        width: 640
        height: 360
        a: 1
    }
}
