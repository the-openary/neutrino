# Neutrino

## 2025-12-12 Update:

I last updated this printer almost 2 years ago in 2024. The printer works, but the useability could definitely be improved.

While I would love to someday really put in the polish to properly finish this design, I really am not sure when that would be. Many of the parts would have to be redesigned from scratch, and I've recently been enjoying other projects much more. That being said, this was still an absolute blast to work on!

Feel free to fork this if you so desire. All I ask is that you give proper attribution!

### Overview

This is Neutrino! It's a portable 3D printer that is meant to be cheap and accessible - it fits inside a filament box! ~~Currently in development~~ currently unfinished, do NOT try building your own without messaging me for help for now. Join the the Discord server [here!](https://discord.gg/VZFWGp7FHZ). Made by @qcoral

![Picture of Neutrino in a hallway](https://hc-cdn.hel1.your-objectstorage.com/s/v3/4f6577e69b27d27d_screenshot_2025-12-12_004501.png)

The `dev_process` folder contains a selection of notes & data that provide a peek into the development process of this printer. Due to privacy reasons it is only a snippet. If there's something specific feel free to reach out. 

### Features
- Fits in a 200x200x70mm volume
- Under $300 CAD (using the attached BOM)
- Uses common, off-the-shelf parts
- Mostly self replicating

*currently the base cannot be self-printed

---
### Getting started

In the root of the repository is a file called `BOM.xlsx`. Contains all the relevant links, notes, etc. Currently missing screw counts, please use the CAD for that!

Join the discord for help, I will gladly give guidance on how to build your own.


---
### FAQ:

**Can I see a video?**

There are short clips that can be found in the discord. Currently working on a proper release video, will try and get that out soon<sup>tm</sup>.

**Where's the extruder?**

Great question! Neutrino is designed to use a Sherpa Mini in bowden configuration. Due to copyright, it cannot be included in the CAD. It can be found [here](https://github.com/Annex-Engineering/Sherpa_Mini-Extruder). Totally awesome design.

**Why a Bowden Setup?**

Initially the printer had a Direct Drive setup, but this was later swapped to Bowden. There were a couple reasons for this
- Faster printing
- Short tube length
- Easier maintenance
- Easier to explain to others
    - Being a portable printer, many people who have never seen a 3D printer see it. I think this makes Neutrino double as an educational/inspirational tool and for that reason it is easier to explain the separate parts of a Bowden extruder vs a DD setup. 

**Where can I source my parts?**

Anywhere you can find them. The `BOM.xlsx` file contains links to all the sources that I used during development. The printer itself uses all standard 8mm + M3 hardware. Use AliExpress, Amazon, spare parts, etc. Unfortunately you will need to print your own parts for now, but that will change soon.

**Is there an assembly guide?**

Not yet, working on that soon. For now you should just use the CAD. There is also the [discord](https://discord.gg/VZFWGp7FHZ) for help. I can assist you personally there.

**What is under `OLED_Module`?**

Under OLED_Module is a custom, optional PCB that contains an OLED display, rotary encoder, kill switch, and speaker. The case is still WIP, but the PCB itself has been tested and works well.

**Why the name "Neutrino"?**

The [Positron](https://github.com/KRALYN/PositronV3) project was a huge inspiration for me whilst designing this project. Seeing the innovation process and Kralyn's willingness to tackle problems was a huge motivator for me. While Neutrino was originally a codename, I believe it fits pretty well. 

---

### TODO:

- [ ] Make the base self replicating
- [ ] Misc clearance fixes
- [ ] Add pin breakout connector
- [ ] Add PET Recycling integration

#### [Credits](/CREDITS.md)