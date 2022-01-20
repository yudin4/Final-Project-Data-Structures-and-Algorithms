-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 21, 2021 at 09:36 AM
-- Server version: 10.4.14-MariaDB
-- PHP Version: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `dbcat`
--

-- --------------------------------------------------------

--
-- Table structure for table `catatan`
--

CREATE TABLE `catatan` (
  `No` int(11) NOT NULL,
  `Waktu` date DEFAULT NULL,
  `CatDibeli` int(11) NOT NULL DEFAULT 0,
  `Pengeluaran` int(11) NOT NULL DEFAULT 0,
  `CatTerjual` int(11) NOT NULL DEFAULT 0,
  `PendapatanKotor` int(11) NOT NULL DEFAULT 0,
  `CatTersisa` int(11) NOT NULL DEFAULT 0,
  `PendapatanBersih` int(11) NOT NULL DEFAULT 0,
  `JumlahTransaksi` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `persediaan`
--

CREATE TABLE `persediaan` (
  `No` int(11) NOT NULL,
  `Waktu` date DEFAULT NULL,
  `TotalGudang` int(11) NOT NULL DEFAULT 0,
  `Putih` int(11) NOT NULL DEFAULT 0,
  `Hitam` int(11) NOT NULL DEFAULT 0,
  `Merah` int(11) NOT NULL DEFAULT 0,
  `Biru` int(11) NOT NULL DEFAULT 0,
  `Kuning` int(11) NOT NULL DEFAULT 0,
  `Jingga` int(11) NOT NULL DEFAULT 0,
  `Hijau` int(11) NOT NULL DEFAULT 0,
  `Abu` int(11) NOT NULL DEFAULT 0,
  `Ungu` int(11) NOT NULL DEFAULT 0,
  `Coklat` int(11) NOT NULL DEFAULT 0,
  `TotalRak` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `riwayatpenjualan`
--

CREATE TABLE `riwayatpenjualan` (
  `No` int(11) DEFAULT NULL,
  `TanggalTransaksi` date DEFAULT NULL,
  `PukulTransaksi` time DEFAULT NULL,
  `WarnaCat` varchar(20) DEFAULT '-',
  `JumlahKaleng` int(11) NOT NULL DEFAULT 0,
  `HargaTotal` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `catatan`
--
ALTER TABLE `catatan`
  ADD PRIMARY KEY (`No`);

--
-- Indexes for table `persediaan`
--
ALTER TABLE `persediaan`
  ADD PRIMARY KEY (`No`);

--
-- Indexes for table `riwayatpenjualan`
--
ALTER TABLE `riwayatpenjualan`
  ADD UNIQUE KEY `No` (`No`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
